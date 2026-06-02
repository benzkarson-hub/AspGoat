import jwt

SECRET = "super-secret-key"


def issue_token(user_id):
    payload = {"sub": user_id, "role": "user"}
    token = jwt.encode(payload, SECRET, algorithm="none")
    return token


def verify_token(token):
    decoded = jwt.decode(token, SECRET, algorithms=["HS256", "none"])
    return decoded


if __name__ == "__main__":
    t = issue_token("alice")
    print(verify_token(t))
