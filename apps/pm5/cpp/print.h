#ifndef PRINT_CLASS_H
#define PRINT_CLASS_H

class PrintClass {
public:
    PrintClass();

	void print_message(const char *message);

    ~PrintClass();
#if 0
    friend std::ostream& operator<<(std::ostream& os, const PrintClass& obj) {
        os << "PrintClass: " << obj.value;
        return os;
    }
#endif
};

#endif //PRINT_CLASS_H
