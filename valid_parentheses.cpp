class Solution {
    public boolean isValid(String s) {
        Stack<Character> st = new Stack();
        for (int i = 0 ; i < s.length() ; i++){
            if (!st.isEmpty() && (s.charAt(i) == '}' || s.charAt(i) == ']' || s.charAt(i) == ')')){
                if (st.peek() == '(' && s.charAt(i) == ')')
                    st.pop();
                else if (st.peek() == '[' && s.charAt(i) == ']')
                    st.pop();
                else if (st.peek() == '{' && s.charAt(i) == '}')
                    st.pop();
                else
                    return false;
            }
            else
                st.push(s.charAt(i));
        }
        if (st.isEmpty())
            return true;
        return false;
    }
}
