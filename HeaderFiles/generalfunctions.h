#pragma once
// #include "header.h"
// #include "character.h"
#include "allHeaders.h"

void greetings(string *name, string *gender, uint32_t *age);

int main_menu();

void print_headline(string x);

void save_game(character *c1);

void load_game(character *c1);

bool new_or_load_game();

void screen_clear();