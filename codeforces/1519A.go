package main

import (
	"fmt"
	"math"
)

func main() {
	var (
		t               int16
		r, b, d, mn, mx int64
	)
	fmt.Scanln(&t)
	for t > 0 {
		fmt.Scanf("%d %d %d\n", &r, &b, &d)
		d += 1
		mn = int64(math.Min(float64(r), float64(b)))
		mx = int64(math.Max(float64(r), float64(b)))
		if mn*d >= mx {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
		t--
	}
}
