import { NavLink } from "react-router-dom";

export default function DocsMenu() {
  return (
    <nav>
      <ul>
        <li>
          <NavLink to={"/docs/overview"}>Overview</NavLink>
        </li>
        <details>
          <summary>Users</summary>
          <li>
            <NavLink to={"/docs/users/signup"}>Signup</NavLink>
          </li>
        </details>
      </ul>
    </nav>
  );
}
