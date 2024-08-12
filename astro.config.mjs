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
          items: [{ label: "Overview", slug: "start-here/overview" }],
        },
        {
          label: "Users",
          items: [{ label: "Signup", slug: "users/signup" }],
        },
      ],
    }),
  ],
});
