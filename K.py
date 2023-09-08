def calculate_gross_salary(basic, grade):
    # Calculate HRA (20% of Basic)
    hra = 0.20 * basic

    # Calculate DA (50% of Basic)
    da = 0.50 * basic

    # Calculate Allowance based on grade
    if grade == 'A':
        allowance = 1700
    elif grade == 'B':
        allowance = 1500
    elif grade == 'C':
        allowance = 1300
    else:
        allowance = 0  # Default allowance for unknown grades

    # Calculate PF (11% of Basic)
    pf = 0.11 * basic

    # Calculate Gross Salary
    gross_salary = basic + hra + da + allowance - pf

    return gross_salary

# Example usage:
basic_A = 10000
grade_A = 'A'
gross_salary_A = calculate_gross_salary(basic_A, grade_A)
print(f"Gross Salary for grade A: {gross_salary_A}")

basic_B = 4567
grade_B = 'B'
gross_salary_B = calculate_gross_salary(basic_B, grade_B)
print(f"Gross Salary for grade B: {gross_salary_B}")
