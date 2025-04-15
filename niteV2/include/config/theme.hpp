#ifndef THEME_HPP
#define THEME_HPP
#include <string>
#include "ui/colors.hpp"

void loadTheme(const std::string themeName);
Color getColor(const std::string elementName);

#endif THEME_HPP
