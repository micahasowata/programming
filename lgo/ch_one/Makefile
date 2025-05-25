.DEFAULT_GOAL := run

.PHONY: clean fmt vet build run

clean:
	@go clean

fmt: clean
	@go fmt ./...

vet: fmt
	@go vet ./...

build: vet
	@go build -o hello

run: build
	@./hello
