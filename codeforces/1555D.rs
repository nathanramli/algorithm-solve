use std::{
    cmp::min,
    io::{self, BufRead, BufReader},
};

const N: usize = 200_000 + 1;
const PATTERN: &str = "abccba";

fn computate(s: &String, ans: &mut Vec<Vec<i32>>) {
    let mut i = 1;
    let bytes = PATTERN.as_bytes();

    for chr in s.bytes() {
        let mut j = 0;
        // We need to check it from left halves
        for x in 0..3 {
            ans[j][i] = ans[j][i - 1];

            if chr != bytes[(x + i) % 3] {
                ans[j][i] += 1;
            }
            j += 1;
        }

        // We need to check it from right halves
        for x in 0..3 {
            ans[j][i] = ans[j][i - 1];

            if chr != bytes[3 + ((x + i) % 3)] {
                ans[j][i] += 1;
            }
            j += 1;
        }
        i += 1;
    }
}

fn main() {
    let stdin = io::stdin();
    let mut stdin = BufReader::new(stdin.lock());

    let mut buf = String::new();
    stdin.read_line(&mut buf).unwrap();
    let mut split = buf.split_ascii_whitespace();
    let _ = split.next().unwrap().parse::<i32>().unwrap_or(0);
    let m = split.next().unwrap().parse::<i32>().unwrap_or(0);

    let mut ans = vec![vec![0; N]; PATTERN.len()];

    buf.clear();
    stdin.read_line(&mut buf).unwrap();
    let s = buf.trim().parse::<String>().unwrap();

    computate(&s, &mut ans);

    for _ in 0..m {
        buf.clear();

        stdin.read_line(&mut buf).unwrap();
        split = buf.split_ascii_whitespace();
        let l = split.next().unwrap().parse::<i32>().unwrap_or(0) as usize;
        let r = split.next().unwrap().parse::<i32>().unwrap_or(0) as usize;

        let mut cost = i32::MAX;
        for i in 0..PATTERN.len() {
            cost = min(cost, ans[i][r] - ans[i][l - 1]);
        }

        println!("{}", cost);
    }
}
