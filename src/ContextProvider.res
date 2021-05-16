let themeContext = React.createContext(React.null);

let makeProps = (~value, ~children, ()) => {
  "value": value,
  "children": children,
};

let make = React.Context.provider(themeContext);