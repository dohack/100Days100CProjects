# C Program for Generating Demo Records

## Overview

Welcome to **Demo Record Generator**! This C program generates a specified number of demo records and outputs them in either CSV, SQL, or both formats. It is a part of the **100Days100CProjects** challenge, designed to enhance your C programming skills.

## Features

- **Data Generation**: Create a user-defined number of demo records.
- **Output Formats**:
  - **CSV**: Export data to a CSV file.
  - **SQL**: Export data to an SQL file.
  - **Both**: Export data to both CSV and SQL files simultaneously.
- **User Interaction**: Simple command-line interface for specifying record count and output format.

## Usage

### Compiling the Program

To compile the C source code, use the following command:

```bash
gcc -o demo-databse-gen app.c
```

This will generate the executable file `demo-databse-gen`.

### Running the Program

Run the compiled program with:

```bash
./demo-databse-gen
```

### Example Interaction

```bash
Enter the number of demo records you want to generate: 5000
Choose output format:
1. CSV
2. SQL
3. Both CSV and SQL  
Enter your choice: 3 
Data has been written to demo-users.csv successfully!
Data has been written to demo-users.sql successfully!
```

### Generated Files

- **`demo-users.csv`**: Contains demo records in CSV format.
- **`demo-users.sql`**: Contains demo records as SQL `INSERT` statements.

#### Example CSV Output

```plaintext
First Name	Last Name	Age	Sex	Mobile Number	Country Code	Address 1	Address 2	Email ID	Password	Pin Code	Country
Name1	Last1	33	Male	1234567890	91	demo Address	demo Address	demo@demo.com	123456	123456	India
Name2	Last2	33	Male	1234567890	91	demo Address	demo Address	demo@demo.com	123456	123456	India
Name3	Last3	33	Male	1234567890	91	demo Address	demo Address	demo@demo.com	123456	123456	India
Name4	Last4	33	Male	1234567890	91	demo Address	demo Address	demo@demo.com	123456	123456	India
```

#### Example SQL Output

```sql
INSERT INTO users (first_name, last_name, age, sex, mobile_number, country_code, address1, address2, email, password, pin_code, country) VALUES
('Name1', 'Last1', 33, 'Male', '1234567890', '+91', 'demo Address', 'demo Address', 'demo@demo.com', '123456', '123456', 'India'),
('Name2', 'Last2', 33, 'Male', '1234567890', '+91', 'demo Address', 'demo Address', 'demo@demo.com', '123456', '123456', 'India'),
('Name3', 'Last3', 33, 'Male', '1234567890', '+91', 'demo Address', 'demo Address', 'demo@demo.com', '123456', '123456', 'India'),
('Name4', 'Last4', 33, 'Male', '1234567890', '+91', 'demo Address', 'demo Address', 'demo@demo.com', '123456', '123456', 'India');
```

## Project Structure

- `app.c`: Source code file for generating demo records.
- `demo-databse-gen`: Compiled executable file.
- `demo-users.csv`: Example CSV output file.
- `demo-users.sql`: Example SQL output file.

## Challenges

- **Data Integrity**: Ensure accurate and consistent data generation.
- **File Handling**: Efficient management of file I/O operations.
- **User Input Validation**: Handle and validate user input to prevent errors.

## Features

- Command-line interface for user interaction.
- Supports multiple output formats.
- Efficient handling of large data volumes.

## Future Updates

- **Customizable Data Fields**: Allow users to define custom fields and formats.
- **Enhanced Error Handling**: Improve robustness and error reporting.
- **Graphical User Interface**: Introduce a GUI for easier use.
- **Extended Data Types**: Include additional data fields and types.

## Contributing

Contributions are welcome! To contribute, please fork the repository, make your changes, and submit a pull request. Ensure your changes follow the coding guidelines and are thoroughly tested.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.



Embark on your C programming journey with **100Days100CProjects** and explore the possibilities with this demo record generator!

