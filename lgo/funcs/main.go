package main

import "fmt"

func varFunc(i ...int) {
	for _, v := range i {
		fmt.Println(v)
	}
}

// returnPlus is a function that returns a function
func returnPlus(toAdd int) func(x int) int {
	return func(x int) int {
		return x + toAdd
	}
}

func main() {
	varFunc(0, 1, 3, 4, 5, 2, 3, 9, 10, 4)

	p := returnPlus(5)
	fmt.Printf("\n5 + 2 = %d\n", p(2))
}
