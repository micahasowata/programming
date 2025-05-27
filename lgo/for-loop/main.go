package main

import "fmt"

func main() {
	counter := 0

C:
	fmt.Printf("currently %d,\n", counter)
	counter++

	if counter < 10 {
		goto C
	}
}
