/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIMessageAllowedMentionsRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIMessageAllowedMentionsRequest::OAIMessageAllowedMentionsRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMessageAllowedMentionsRequest::OAIMessageAllowedMentionsRequest() {
    this->initializeModel();
}

OAIMessageAllowedMentionsRequest::~OAIMessageAllowedMentionsRequest() {}

void OAIMessageAllowedMentionsRequest::initializeModel() {

    m_parse_isSet = false;
    m_parse_isValid = false;

    m_users_isSet = false;
    m_users_isValid = false;

    m_roles_isSet = false;
    m_roles_isValid = false;

    m_replied_user_isSet = false;
    m_replied_user_isValid = false;
}

void OAIMessageAllowedMentionsRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMessageAllowedMentionsRequest::fromJsonObject(QJsonObject json) {

    m_parse_isValid = ::dc_rest::fromJsonValue(m_parse, json[QString("parse")]);
    m_parse_isSet = !json[QString("parse")].isNull() && m_parse_isValid;

    m_users_isValid = ::dc_rest::fromJsonValue(m_users, json[QString("users")]);
    m_users_isSet = !json[QString("users")].isNull() && m_users_isValid;

    m_roles_isValid = ::dc_rest::fromJsonValue(m_roles, json[QString("roles")]);
    m_roles_isSet = !json[QString("roles")].isNull() && m_roles_isValid;

    m_replied_user_isValid = ::dc_rest::fromJsonValue(m_replied_user, json[QString("replied_user")]);
    m_replied_user_isSet = !json[QString("replied_user")].isNull() && m_replied_user_isValid;
}

QString OAIMessageAllowedMentionsRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMessageAllowedMentionsRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_parse.size() > 0) {
        obj.insert(QString("parse"), ::dc_rest::toJsonValue(m_parse));
    }
    if (m_users.size() > 0) {
        obj.insert(QString("users"), ::dc_rest::toJsonValue(m_users));
    }
    if (m_roles.size() > 0) {
        obj.insert(QString("roles"), ::dc_rest::toJsonValue(m_roles));
    }
    if (m_replied_user_isSet) {
        obj.insert(QString("replied_user"), ::dc_rest::toJsonValue(m_replied_user));
    }
    return obj;
}

QSet<QString> OAIMessageAllowedMentionsRequest::getParse() const {
    return m_parse;
}
void OAIMessageAllowedMentionsRequest::setParse(const QSet<QString> &parse) {
    m_parse = parse;
    m_parse_isSet = true;
}

bool OAIMessageAllowedMentionsRequest::is_parse_Set() const{
    return m_parse_isSet;
}

bool OAIMessageAllowedMentionsRequest::is_parse_Valid() const{
    return m_parse_isValid;
}

QSet<QString> OAIMessageAllowedMentionsRequest::getUsers() const {
    return m_users;
}
void OAIMessageAllowedMentionsRequest::setUsers(const QSet<QString> &users) {
    m_users = users;
    m_users_isSet = true;
}

bool OAIMessageAllowedMentionsRequest::is_users_Set() const{
    return m_users_isSet;
}

bool OAIMessageAllowedMentionsRequest::is_users_Valid() const{
    return m_users_isValid;
}

QSet<QString> OAIMessageAllowedMentionsRequest::getRoles() const {
    return m_roles;
}
void OAIMessageAllowedMentionsRequest::setRoles(const QSet<QString> &roles) {
    m_roles = roles;
    m_roles_isSet = true;
}

bool OAIMessageAllowedMentionsRequest::is_roles_Set() const{
    return m_roles_isSet;
}

bool OAIMessageAllowedMentionsRequest::is_roles_Valid() const{
    return m_roles_isValid;
}

bool OAIMessageAllowedMentionsRequest::isRepliedUser() const {
    return m_replied_user;
}
void OAIMessageAllowedMentionsRequest::setRepliedUser(const bool &replied_user) {
    m_replied_user = replied_user;
    m_replied_user_isSet = true;
}

bool OAIMessageAllowedMentionsRequest::is_replied_user_Set() const{
    return m_replied_user_isSet;
}

bool OAIMessageAllowedMentionsRequest::is_replied_user_Valid() const{
    return m_replied_user_isValid;
}

bool OAIMessageAllowedMentionsRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_parse.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_users.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_roles.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_replied_user_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMessageAllowedMentionsRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
