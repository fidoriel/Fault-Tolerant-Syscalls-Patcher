file = "patched_benchmark.txt"
with open(file, 'r') as f:
    numbers = [int(line.strip()) for line in f if line.strip()]
    average = sum(numbers) / len(numbers)
    print(f"Average: {average} in {file}")
