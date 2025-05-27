package main

import "fmt"

func varFunc(i ...int) {
	for _, v := range i {
		fmt.Println(v)
	}
}

func main() {
	varFunc(0, 1, 3, 4, 5, 2, 3, 9, 10, 4)
}
