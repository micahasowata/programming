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

// map function
// applies m on every element in z
func mMap(m func(int) int, z []int) []int {
	for k, v := range z {
		z[k] = m(v)
	}

	return z
}

func main() {
	varFunc(0, 1, 3, 4, 5, 2, 3, 9, 10, 4)

	p := returnPlus(5)
	fmt.Printf("\n5 + 2 = %d\n", p(2))

	m := func(i int) int {
		return i * i
	}

	x := mMap(m, []int{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144})

	fmt.Printf("%v\n", x)
}
