#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& other) : Form("ShrubberyCreationForm", 145, 137), _target(other._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(ShrubberyCreationForm const& other) {
    (void)other;
    return *this;
}

const char*     ShrubberyCreationForm::OpenFailException::what() const throw() {
    return "File opening failed!";
}

const char*     ShrubberyCreationForm::WriteFailException::what() const throw() {
    return "Writing to file failed!";
}

void            ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::string file = _target + "_shrubbery";
    std::ofstream out(file);
    std::string   const         messageTarget[28] = {"         |",
    "        -+-\n",
    "         A\n",
    "        /=\\               /\\  /\\    ___  _ __  _ __ __    __\n",
    "      i/ O \\i            /  \\/  \\  / _ \\| '__|| '__|\\ \\  / /\n",
    "      /=====\\           / /\\  /\\ \\|  __/| |   | |    \\ \\/ /\n",
    "      /  i  \\           \\ \\ \\/ / / \\___/|_|   |_|     \\  /\n",
    "    i/ O * O \\i                                       / /\n",
    "    /=========\\        __  __                        /_/    _\n",
    "    /  *   *  \\        \\ \\/ /        /\\  /\\    __ _  ____  | |\n",
    "  i/ O   i   O \\i       \\  /   __   /  \\/  \\  / _` |/ ___\\ |_|\n",
    "  /=============\\       /  \\  |__| / /\\  /\\ \\| (_| |\\___ \\  _\n",
    "  /  O   i   O  \\      /_/\\_\\      \\ \\ \\/ / / \\__,_|\\____/ |_|\n",
    "i/ *   O   O   * \\i\n",
    "/=================\\\n",
    "    |___|\n",
    "\n",
    "      .\n",
    "   __/ \\__\n",
    "   \\     /\n",
    "   /.'o'.\\\n",
    "    .o.'.\n",
    "   .'.'o'.\n",
    "  o'.o.'.o.\n",
    " .'.o.'.'.o.\n",
    ".o.'.o.'.o.'.\n",
    "   [_____]\n",
    "    \\___/\n" };
    if (!out.is_open() || out.bad())
        throw OpenFailException();
    for (int i = 0; i < 28; i++) {
        out << messageTarget[i] << std::endl;
        if (out.bad()) {
            out.close();
            throw WriteFailException();
        }
    }
    out.close();
}