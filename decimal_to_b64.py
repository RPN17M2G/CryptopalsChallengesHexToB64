import sys
import base64

def is_string_decimal(string_to_check: str) -> bool:
    for character in string_to_check:
        if character < '0' or character > '9':
            return False
        
    return True

def convert(decimal_string: str):
    if not is_string_decimal(decimal_string):
        print("Invalid string to convert!")
        return ''
    
    base64_string = base64.b64encode(decimal_string.encode())
    return base64_string.decode()

if __name__ == '__main__':
    if len(sys.argv) <= 1:
        print("""
        usage: decimal_to_b64.py [decimal string]

        A tool for converting decimal stream to base64 stream
    
        positional arguments:
            decimal string         The string to be converted
        """)
    else:   
        print(f"Base64 string: {convert(sys.argv[1])}")

