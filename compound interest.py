# Function to calculate compound interest
def calculate_compound_interest(principal, rate, time, n):
    # Convert rate from percentage to decimal
    rate_decimal = rate / 100
    # Calculate compound interest
    amount = principal * (1 + rate_decimal / n) ** (n * time)
    return amount

# Main program
def main():
    print("Compound Interest Calculator")
    
    # Accept user input
    principal = float(input("Enter the principal amount (P): "))
    rate = float(input("Enter the annual interest rate (in %): "))
    time = float(input("Enter the time (in years): "))
    n = int(input("Enter the number of times interest is compounded per year (n): "))
    
    # Calculate amount
    amount = calculate_compound_interest(principal, rate, time, n)
    
    # Calculate compound interest
    compound_interest = amount - principal
    
    # Display results
    print(f"\nTotal amount after {time} years: ${amount:.2f}")
    print(f"Compound Interest: ${compound_interest:.2f}")

# Run the main program
if __name__ == "__main__":
    main()
