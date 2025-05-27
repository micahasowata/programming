package main

import "fmt"

// fib finds the fibonacci number at index i
func fib(i int) int {
	if i > 2 {
		return fib(i-1) + fib(i-2)
	}

	if i <= 0 {
		return 0
	}

	return 1
}

func main() {
	for i := range 10 {
		fmt.Printf("fib %d == %d\n", i, fib(i))
	}
}
