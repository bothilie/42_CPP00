#include "Account.class.hpp"

static int index_account = 0;
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts  << "total:" << _totalAmount;
    std::cout << "deposits:" << _totalNbDeposits;
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
    
    _nbAccounts = index_account;
    _totalAmount += initial_deposit;
    _amount += initial_deposit;
	_totalNbDeposits++;
    _accountIndex = index_account;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
    _checkAmount = 0;
    index_account++;

    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex<< ";amount:" << ";created" << std::endl;
}

Account::Account() {
} 

Account::~Account( void ){
    
    _nbAccounts--;
    _totalAmount -= _amount;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex<< ";amount:" << _amount << ";closed" << std::endl;
    
}

void	Account::makeDeposit( int deposit )
{
    
    _nbDeposits++;
    _totalNbDeposits++;
    _amount += deposit;
    _totalAmount += deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex<< ";p_amount:" << (_amount - deposit) << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    if (withdrawal < _amount) // ou total amount
    {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        Account::_displayTimestamp();
        std::cout << "index:" << _accountIndex<< ";p_amount:" << (_amount + withdrawal) << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex<< ";p_amount:" << (_amount + withdrawal) << ";refused" << std::endl;
    return false;
}

int		Account::checkAmount( void ) const
{
    Account *tmp = new Account(*this);
    tmp->_checkAmount++;
    return _amount;
}

void	Account::_displayTimestamp( void )
{
    time_t temps;

    time(&temps);
    tm *t = localtime(&temps);
    std::cout  << "[" << t->tm_year + 1900;
    std::cout << t->tm_mon;
    std::cout << t->tm_mday;
    std::cout << "_" << t->tm_hour << t->tm_min << t->tm_sec << "] " ;

}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex<< ";amount:" << _amount << ";deposits:" << _nbDeposits << "withdrawals:" << _nbWithdrawals << std::endl;
}
