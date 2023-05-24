void checkSecurity(String[] people) {
    bool found = false; // this boolean can be removed, we can just use the return when found
    for (int i = 0; i < people.Length; i++) // we can use shorter loop syntax
    {
        if (!found) // same as above, this won't be needed
        {
            if (people[i].Equals("Don")) // code repetition
            {
                sendAlert();
                found = true;
            }
            if (people[i].Equals("John")) // code repetition
            {
                sendAlert();
                found = true;
            }
        }
    }
}