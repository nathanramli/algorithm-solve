package main

import (
	"fmt"
	"math"
)

func main() {
	var t, n, k int
	fmt.Scanln(&t)

	for t > 0 {
		fmt.Scan(&n)
		fmt.Scan(&k)
		if int(math.Ceil(float64(n)/2.)) <= k {
			fmt.Println("-1")
		} else {
			o, e := 1, n
			for i := 1; i <= n; i++ {
				if i&1 != 1 && k > 0 {
					fmt.Print(e, " ")
					e--
					k--
				} else {
					fmt.Print(o, " ")
					o++
				}
			}
			fmt.Println()
		}
		t--
	}
}
