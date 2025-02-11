with open('non_patched_benchmark.txt', 'r') as f:
    numbers = [float(line.strip()) for line in f if line.strip()]
    average = sum(numbers) / len(numbers)
    print(f"Average: {average:.9f}")
