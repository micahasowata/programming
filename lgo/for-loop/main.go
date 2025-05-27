package main

import "fmt"

func main() {
	for i := range 10 {
		fmt.Printf("currently at %d,\n", i)
	}
}
