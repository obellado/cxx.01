#include <iostream>
#include <string>
#include "Karen.hpp"

Karen::Karen( void ){
	return ;
}

Karen::~Karen( void ){ return ; }

void Karen::debug( void ){
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void ){
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void ){
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}



void Karen::complain( std::string level ){

	std::string	level_[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void		(Karen::*f[4])( void ) = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
	int			flag;

	for (int i = 0; i < 4; i++){
		flag = level.compare(level_[i]);
		switch (flag){
			case (false):
				std::cout << "[ " << level << " ]" << std::endl;
				switch (i){
					case 0:
						(this->*f[i++])();
					case 1:
						(this->*f[i++])();
					case 2:
						(this->*f[i++])();
					case 3:
						(this->*f[i++])();
				return ;
				}
			case (true):
				break;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}