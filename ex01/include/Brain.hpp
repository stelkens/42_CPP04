#ifndef BRAIN_HPP
#define BRAIN_HPP
#define arraySize 100
#include<string>

class Brain
{
	private:
		std::string	_ideas[arraySize]; 

	public:
		Brain();
		Brain(const Brain &other);
		~Brain();

		Brain &operator=(const Brain& other);
		
		void	setIdea(size_t index, const std::string &idea);
		void	printIdeas(void) const;

};

#endif
