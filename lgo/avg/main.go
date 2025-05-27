package main

import "fmt"

func main() {
	s := []float64{0.8452, 0.2134, 0.9821, 0.4567, 0.1239, 0.6543, 0.3219, 0.8765, 0.5678, 0.2198}

	sum := 0.0

	for _, v := range s {
		sum += v
	}

	average := sum / float64(len(s))

	fmt.Printf("average: %.2f\n", average)
}
