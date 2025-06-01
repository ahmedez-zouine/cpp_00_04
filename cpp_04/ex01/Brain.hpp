#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define THOUGHT     "start Thinking"
# define CAT_THOUGHT "Cat start Thinking !"
# define DOG_THOUGHT "Dog start Thinking !"

class Brain
{
    protected :
        std::string ideas[100];

    public :
        Brain();
        Brain(Brain const &copy);
        ~Brain();
        Brain(std::string type);
        Brain& operator= (const Brain &src);

        const std::string getIdea() const;
        void setIdea(std::string const idea);
};

#endif