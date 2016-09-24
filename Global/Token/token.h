
namespace ACPL
{
    class Token
    {
    private:

        TokenType type;

    public:

        enum class TokenType
        {
            IDENTIFIER,
            KEY,
            OPERATOR,
        };

        TokenType get_type();
    };
}