## Rescript Problems and Approaches

- Prop spreading -> Not Possible by design
- Default prop:

```re
let make = (~containerClass="form-group") => {...}
```

- Optional prop:

```re
let make = (~containerClass=?) => {...}
```

- Optional property of type !?
- Styling !?
- API requests (Promise/ fetch etc.) !?
- Event handling:

```re
<button onClick={evt => setSomething(ReactEvent.Form.target(evt)["value"]} />
// or
<button onClick={evt => ReactEvent.Form.target(evt)["value"]->setSomething} />
```

- Optional prop usage:

```re
let make = (~checked: option<bool>=?) => {
  <input ?checked />
}
```

- Hot reload missing (can be possible with importing js module, try)
- VSCode `.bs.js` ignoring would be beneficial
- Record to string:

```re
 let stringifiedPayload = payload |> Js.Json.object\_ |> Js.Json.stringify;
```
