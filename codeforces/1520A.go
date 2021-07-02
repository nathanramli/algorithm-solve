package main

import "fmt"

func main() {
	var t, n int
	var str string
	fmt.Scanln(&t)
	for t > 0 {
		fmt.Scanln(&n)
		fmt.Scanln(&str)
		last := '-'
		var done [26]bool
		answer := true
		for _, ch := range str {
			index := byte(ch) - 65
			if done[index] == true && last != ch {
				answer = false
				break
			}
			done[index] = true
			last = ch
		}
		if answer {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
		t--
	}
}
