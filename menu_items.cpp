#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const IBusko::MenuItem IBusko::PUSHKIN_DUBROVSKY = {
    "1 - Дубровский", IBusko::pushkin_dubrovsky, &IBusko::WRITER_PUSHKIN
};
const IBusko::MenuItem IBusko::PUSHKIN_EUGENE_ONEGIN = {
    "2 - Евгений Онегин", IBusko::pushkin_eugene_onegin, &IBusko::WRITER_PUSHKIN
};
const IBusko::MenuItem IBusko::PUSHKIN_WINTER_EVENING = {
    "3 - Зимний вечер", IBusko::pushkin_winter_evening, &IBusko::WRITER_PUSHKIN
};
const IBusko::MenuItem IBusko::PUSHKIN_GO_BACK = {
    "0 - Выйти в предыдущее меню", IBusko::writer_go_back, &IBusko::WRITER
};

const IBusko::MenuItem IBusko::WRITER_PUSHKIN = {
    "1 - Читать Пушкина", IBusko::writer_pushkin, &IBusko::WRITER
};
const IBusko::MenuItem IBusko::WRITER_LERMONTOV = {
    "2 - Читать Лермонтова", IBusko::writer_lermontov, &IBusko::WRITER
};
const IBusko::MenuItem IBusko::WRITER_KRILOV = {
    "3 - Читать Крылова", IBusko::writer_krilov, &IBusko::WRITER
};
const IBusko::MenuItem IBusko::WRITER_GO_BACK = {
    "0 - Выйти в главное меню", IBusko::writer_go_back, &IBusko::WRITER
};

namespace {
    const IBusko::MenuItem* const pushkin_children[] = {
        &IBusko::PUSHKIN_DUBROVSKY,
        &IBusko::PUSHKIN_EUGENE_ONEGIN,
        &IBusko::PUSHKIN_WINTER_EVENING,
        &IBusko::PUSHKIN_GO_BACK
    };
    const int pushkin_size = sizeof(pushkin_children) / sizeof(pushkin_children[0]);
}

const IBusko::MenuItem IBusko::WRITER_PUSHKIN = {
    "1 - Читать Пушкина", IBusko::show_menu, &IBusko::WRITER, pushkin_children, pushkin_size
};
const IBusko::MenuItem IBusko::WRITER_LERMONTOV = {
    "2 - Читать Лермонтова", IBusko::writer_lermontov, &IBusko::WRITER
};
const IBusko::MenuItem IBusko::WRITER_KRILOV = {
    "3 - Читать Крылова", IBusko::writer_krilov, &IBusko::WRITER
};
const IBusko::MenuItem IBusko::WRITER_GO_BACK = {
    "0 - Выйти в главное меню", IBusko::writer_go_back, &IBusko::WRITER
};

namespace {
    const IBusko::MenuItem* const writer_children[] = {
        &IBusko::WRITER_GO_BACK,
        &IBusko::WRITER_SUMM,
        &IBusko::WRITER_SUBSTRACT,
        &IBusko::WRITER_MULTIPLY,
        &IBusko::WRITER_DIVIDE
    };
    const int writer_size = sizeof(wruter_children) / sizeof(writer_children[0]);
}

const IBusko::MenuItem IBusko::WRITER = {
    "1 -  Русские писатели", IBusko::show_menu, &IBusko::MAIN, writer_children, writer_size
};
const IBusko::MenuItem IBusko::EXIT = {
    "0 - Завершить чтение", IBusko::exit, &IBusko::MAIN
};

namespace {
    const IBusko::MenuItem* const main_children[] = {
        &IBusko::EXIT,
        &IBusko::WRITER
    };
    const int writer_size = sizeof(main_children) / sizeof(main_children[0]);
}

const IBusko::MenuItem IBusko::MAIN = {
    nullptr, IBusko::show_menu, nullptr, main_children, main_size
};