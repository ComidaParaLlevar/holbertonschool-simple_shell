# Simple Shell

This is the README file for the Simple Shell project, created for Holberton Coding School.

## Authors

- Koral Rivera
- Lyan Osorio

## Description

The Simple Shell project is a command-line interpreter that replicates the basic functionality of the Unix shell. It allows users to execute commands, navigate the file system, and manage processes.

## Getting Started

To get started with the Simple Shell project, follow these steps:

1. Clone the repository: 'git@github.com:ComidaParaLlevar/holbertonschool-simple_shell.git'
2. Compile the source code: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
3. Run the shell: `./hsh`

## Usage

The Simple Shell project supports the following features:

- Executing commands: `ls`, `pwd`, `echo`, etc.
- Command line arguments: `ls -l`, `echo Hello, World!`, etc.
- Redirection: `ls > file.txt`, `cat < file.txt`, etc.
- Pipelines: `ls | grep shell`, `echo Hello | wc -c`, etc.
- Environment variables: `echo $HOME`, `export PATH=/usr/bin`, etc.

For more information on how to use the Simple Shell, refer to the [man page](man_1_simple_shell).

## Contributing

Contributions to the Simple Shell project are welcome! If you would like to contribute, please follow these steps:

1. Fork the repository
2. Create a new branch: `git checkout -b feature/your-feature`
3. Make your changes and commit them: `git commit -m 'Add your feature'`
4. Push to the branch: `git push origin feature/your-feature`
5. Submit a pull request

