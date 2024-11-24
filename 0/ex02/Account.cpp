/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zachamou <zachamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:00:26 by zachamou          #+#    #+#             */
/*   Updated: 2024/11/04 15:01:49 by zachamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalAmount = 0;


Account::Account(int initial_deposit)
{
    this->_accountIndex = getNbAccounts();
    _nbAccounts++;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_totalAmount += this->_amount;    
    Account::_displayTimestamp();
    std::cout << "index:"<<_accountIndex<< ";amount:"<<_amount<<";created"<< std::endl;
}

Account::~Account(void)
{
    Account::_displayTimestamp();
    std::cout << "index:"<<_accountIndex<< ";amount:"<<_amount<<";closed"<< std::endl;
}

void Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    if(deposit > 0)
    {
        this->_amount += deposit;
        std::cout << "index:" << this->_accountIndex << ";p_amount:"<<";deposit:"<< deposit <<";amount:"<< this->_amount<<";nb_deposits:"<< this->_nbDeposits << std::endl;
        this->_nbDeposits++;
        return;
    }
    return;
}

void	Account::_displayTimestamp( void )
{
    std::time_t t = std::time(NULL); 
    std::tm* tm_ptr = std::localtime(&t); 
    std::cout << "[" 
              << (tm_ptr->tm_year + 1900) 
              << std::setw(2) << std::setfill('0') << (tm_ptr->tm_mon + 1) 
              << std::setw(2) << std::setfill('0') << tm_ptr->tm_mday      
              << "_"
              << std::setw(2) << std::setfill('0') << tm_ptr->tm_hour    
              << std::setw(2) << std::setfill('0') << tm_ptr->tm_min      
            << "]";
}


bool Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    if(withdrawal > 0 || withdrawal <= Account::_amount) 
    {
        std::cout << "index:" << this->_accountIndex << ";amount:" << Account::_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
        return (true);
    }
    std::cout << "Refused "<< std::endl;
    return(false);
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)            
{
    return(_totalAmount);
}

int Account::getNbDeposits(void)
{
    return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return(_totalNbWithdrawals);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void Account::displayAccountsInfos(void) 
{
    Account::_displayTimestamp();
    std::cout <<"accounts:"<< getNbAccounts()<< ";total:"<< getTotalAmount()<<";deposits:"<< getNbWithdrawals()<< std::endl;
}


void	Account::displayStatus(void) const
{ 
    Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount() << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

