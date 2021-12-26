#pragma once

#include <string>

#include <set>

typedef struct {
    std::string user_id  = "";
    std::string email    = "";
    std::string password = "";
    std::string nickname = "";
} user_t;

typedef struct {
    std::string user_id  = "";
    std::string building = "";
    std::string housing  = "";
    std::string street   = "";
    std::string city     = "";
    std::string district = "";
    std::string index    = "";
    std::string country  = "";
} address_data_t;

typedef struct {
    std::string user_id      = "";
    std::string first_name   = "";
    std::string surname      = "";
    std::string age          = "";
    std::string phone_number = "";
    std::string status       = "";
    std::string label        = "";
    std::string description  = "";
} personal_data_t;

typedef struct {
    std::string user_id     = "";
    std::string event_name  = "";
    std::string date        = "";
    std::string description = "";
    std::string time_begin  = "";
    std::string time_end    = "";
} event_t;

typedef struct {
    std::string group_id    = "";
    std::string meetup_name = "";
    std::string date        = "";
    std::string description = "";
    std::string time_begin  = "";
    std::string time_end    = "";
} meetup_t;

typedef struct {
    std::string           group_id;
    std::string           title;
    std::set<std::string> members;  //  user_id
} group_t;

typedef struct {
    std::string           user_id;
    std::set<std::string> list_contacts;
} contacts_t;

bool operator< (const event_t& lhs, const event_t& rhs);

bool operator< (const meetup_t& lhs, const meetup_t& rhs);

bool operator< (const group_t& lhs, const group_t& rhs);

//  Отладка
namespace Print_struct {
    void _event_t(const event_t& e);

    void _meetup_t(const meetup_t& e);

    void _user_t(const user_t& u);

    void _contacts_t(const contacts_t& c);

    void _group_t(const group_t& g);

    void from_client(const std::string& in);

    void from_processing(const std::string& in);

    void _personal_data_t(const personal_data_t& d);

    void _address_data_t(const address_data_t& a);
}