use std::{cmp::{max, min}, io::{BufRead, BufReader, self}};


const N: i32 = 1e5 as i32;
fn main() {
    let mut prefix_sum_top = [0; (N + 1) as usize];
    let mut prefix_sum_bottom = [0; (N + 1) as usize];

    let stdin = io::stdin();
    let mut stdin = BufReader::new(stdin.lock());

    let mut buf = String::new();
    stdin.read_line(&mut buf).unwrap();
    let t: i32 = buf.trim().parse().unwrap();

    for _ in 0..t {
        buf.clear();
        stdin.read_line(&mut buf).unwrap();
        let m: i32 = buf.trim().parse().unwrap();
        
        prefix_sum_top[0] = 0;
        prefix_sum_bottom[0] = 0;

        buf.clear();
        stdin.read_line(&mut buf).unwrap();
        let mut split = buf.split_ascii_whitespace();
        let mut a: Vec<i32> = Vec::with_capacity(m as usize);
        for i in 0..m {
            let val = split.next().unwrap().parse().unwrap();
            a.push(val);
            prefix_sum_top[(i + 1) as usize] = prefix_sum_top[i as usize] + val;
        }

        buf.clear();
        stdin.read_line(&mut buf).unwrap();
        let mut split = buf.split_ascii_whitespace();
        let mut b: Vec<i32> = Vec::with_capacity(m as usize);
        for i in 0..m {
            let val = split.next().unwrap().parse().unwrap();
            b.push(val);
            prefix_sum_bottom[(i + 1) as usize] = prefix_sum_bottom[i as usize] + val;
        }

        let choose_straight_top = prefix_sum_top[m as usize] + (prefix_sum_bottom[m as usize] - prefix_sum_bottom[(m - 1) as usize]);
        let choose_straight_bottom = prefix_sum_bottom[m as usize] + prefix_sum_top[1];

        let mut ans = i32::MAX;
        for i in 0..m {
            let taken_top = prefix_sum_top[(i + 1) as usize] + (prefix_sum_bottom[m as usize] - prefix_sum_bottom[(m - 1) as usize]);
            let taken_bottom = prefix_sum_top[1] + (prefix_sum_bottom[m as usize] - prefix_sum_bottom[i as usize]);
            
            let current_max = max(choose_straight_top - taken_top, choose_straight_bottom - taken_bottom);
            ans = min(ans, current_max);
        }
        println!("{}", ans);
    }
}