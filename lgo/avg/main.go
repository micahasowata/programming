package main

import (
	"fmt"
)

// average finds the mean of a slice
func average(x []float64) float64 {
	xLen := float64(len(x))

	sum := 0.0
	for _, i := range x {
		sum += i
	}

	return sum / xLen
}

func main() {
	s := []float64{0.8452, 0.2134, 0.9821, 0.4567, 0.1239, 0.6543, 0.3219, 0.8765, 0.5678, 0.2198}
	avg := average(s)

	fmt.Printf("average: %.2f\n", avg)
}
