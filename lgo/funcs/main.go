package main

import "fmt"

func varFunc(i ...int) {
	for _, v := range i {
		fmt.Println(v)
	}
}

// returnPlusTwo is a function that returns a function
func returnPlusTwo() func(x int) int {
	return func(x int) int {
		return x + 2
	}
}

func main() {
	varFunc(0, 1, 3, 4, 5, 2, 3, 9, 10, 4)

	p := returnPlusTwo()
	fmt.Printf("\n2 + 2 = %d\n", p(2))
}
