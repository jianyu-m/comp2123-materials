
#include <iostream>

struct StudentNode_t {
    struct StudentNode_t *next;
    int studentId;
};

typedef StudentNode_t StudentNode;

StudentNode* built_nodes() {
    StudentNode *head, *current_read, *tmp;
    int studentIdTmp;
    while (std::cin >> studentIdTmp) {
        tmp = new StudentNode();
        tmp->studentId = studentIdTmp;
        tmp->next = NULL;
        if (head == NULL) {
            head = tmp;
        }
        current_read->next = tmp;
        current_read = tmp;
    }
    return head;
}

int main(int argc, char const *argv[]) {
    StudentNode *head, *current;
    
    head = built_nodes();
    current = head;
    while (current) {
        std::cout << current->studentId << "\n";
        current = current->next;
    }

    return 0;
}
