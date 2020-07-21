import { createGlobalStyle } from "styled-components";
import reset from "styled-reset";

const GlobalStyles = createGlobalStyle`
    ${reset};
    body {
        background-color : ${props => props.theme.backgroundColor};
    }
    #root {
        margin: 0 auto;
    }
    
`

export default GlobalStyles