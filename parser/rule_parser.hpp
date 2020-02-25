#ifndef RULE_PARSER_HPP
#define RULE_PARSER_HPP

#include <memory>
#include <string>

namespace wf
{

class lexer_t;
class rule_t;

class rule_parser_t {
public:
    std::shared_ptr<rule_t> parse(const std::string &text);
    std::shared_ptr<rule_t> parse(lexer_t &lexer);
};

} // End namespace wf.

#endif // RULE_PARSER_HPP
