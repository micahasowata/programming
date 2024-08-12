import { defineConfig } from "astro/config";
import starlight from "@astrojs/starlight";

export default defineConfig({
  integrations: [
    starlight({
      title: "Tiny Docs",
      social: {
        github: "https://github.com/micahasowata/minasa-docs",
      },
      sidebar: [
        {
          label: "Start Here",
          items: [
            { label: "Overview", slug: "start-here/overview" },
            { label: "Errors", slug: "start-here/errors" },
          ],
        },
        {
          label: "Users",
          items: [
            { label: "Signup", slug: "users/signup" },
            { label: "Login", slug: "users/login" },
            { label: "Logout", slug: "users/logout" },
          ],
        },
        {
          label: "Tasks",
          items: [
            { label: "Create", slug: "tasks/create" },
            { label: "All", slug: "tasks/all" },
            { label: "Get", slug: "tasks/single" },
            { label: "Update", slug: "tasks/update" },
          ],
        },
      ],
    }),
  ],
});
