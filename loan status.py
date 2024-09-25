# Loan Qualification Program

def check_loan_qualification():
    # Prompt the user for their age
    age = int(input("Please enter your age: "))
    
    # Prompt the user for their annual income
    income = float(input("Please enter your annual income (in Sh): "))
    
    # Check the qualifications
    if age >= 21 and income >= 21000:
        print("Congratulations, you qualify for a loan.")
    else:
        print("Unfortunately, we are unable to offer you a loan at this time.")

# Call the function to execute the program
check_loan_qualification()
