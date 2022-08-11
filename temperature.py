a = 5.0
b = 9.0
c = 32.0

def convert_to_celsius(fahrenheit: float) -> float:
    return (fahrenheit - c) * a / b

def convert_to_fahrenheit(celsius: float) -> float:
    return celcius * b / a + c

