def remove_comments(text):
    in_str = False
    prev_is_slash = False
    prev_is_lbracket = False
    prev_is_asterisk = False

    in_slash_comment = False
    in_brace_comment = False
    in_bracket_comment = False

    text_new = ''
    for c in text:
        if prev_is_lbracket:
            prev_is_lbracket = False
            if c == '*':
                in_bracket_comment = True
                continue
            else:
                text_new += '('

        if in_brace_comment:
            if c == '}':
                in_brace_comment = False

            continue

        if in_bracket_comment:
            if c == ')' and prev_is_asterisk:
                in_bracket_comment = False

            prev_is_asterisk = (c == '*')
            continue

        if in_slash_comment:
            if c == '\n':
                in_slash_comment = False
                text_new += c

            continue

        if in_str:
            if c == "'":
                in_str = False
            text_new += c
            continue

        # Not in_str, not in_brace_comment, not in_bracket_comment.
        if c == '/':
            if prev_is_slash:
                prev_is_slash = False
                in_slash_comment = True
                continue

            prev_is_slash = True
            # Do not append slash to text_new.
            continue
        elif prev_is_slash:
            text_new += '/'
            prev_is_slash = False

        if c == '(':
            prev_is_lbracket = True
            # Do not append bracket to text_new.
            continue

        if c == '{':
            in_brace_comment = True
            continue

        if c == "'":
            in_str = True

        text_new += c

    return text_new

def remove_blank_lines(text):
    prev_is_new_line = True

    text_new = ''
    for c in text:
        if c == '\n':
            prev_is_new_line = True
        else:
            if prev_is_new_line and text_new != '':
                text_new += '\n'
            text_new += c
            prev_is_new_line = False

    return text_new

line = ''
s = ''

while True:
    try:
        line = input()
    except EOFError:
        break
    s += line + '\n'

s = remove_comments(s)
s = remove_blank_lines(s)

print(s)