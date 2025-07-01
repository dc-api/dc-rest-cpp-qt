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

#include "OAIEmojiResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIEmojiResponse::OAIEmojiResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEmojiResponse::OAIEmojiResponse() {
    this->initializeModel();
}

OAIEmojiResponse::~OAIEmojiResponse() {}

void OAIEmojiResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_roles_isSet = false;
    m_roles_isValid = false;

    m_require_colons_isSet = false;
    m_require_colons_isValid = false;

    m_managed_isSet = false;
    m_managed_isValid = false;

    m_animated_isSet = false;
    m_animated_isValid = false;

    m_available_isSet = false;
    m_available_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;
}

void OAIEmojiResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEmojiResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_roles_isValid = ::dc_rest::fromJsonValue(m_roles, json[QString("roles")]);
    m_roles_isSet = !json[QString("roles")].isNull() && m_roles_isValid;

    m_require_colons_isValid = ::dc_rest::fromJsonValue(m_require_colons, json[QString("require_colons")]);
    m_require_colons_isSet = !json[QString("require_colons")].isNull() && m_require_colons_isValid;

    m_managed_isValid = ::dc_rest::fromJsonValue(m_managed, json[QString("managed")]);
    m_managed_isSet = !json[QString("managed")].isNull() && m_managed_isValid;

    m_animated_isValid = ::dc_rest::fromJsonValue(m_animated, json[QString("animated")]);
    m_animated_isSet = !json[QString("animated")].isNull() && m_animated_isValid;

    m_available_isValid = ::dc_rest::fromJsonValue(m_available, json[QString("available")]);
    m_available_isSet = !json[QString("available")].isNull() && m_available_isValid;

    m_user_isValid = ::dc_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;
}

QString OAIEmojiResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEmojiResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_roles.size() > 0) {
        obj.insert(QString("roles"), ::dc_rest::toJsonValue(m_roles));
    }
    if (m_require_colons_isSet) {
        obj.insert(QString("require_colons"), ::dc_rest::toJsonValue(m_require_colons));
    }
    if (m_managed_isSet) {
        obj.insert(QString("managed"), ::dc_rest::toJsonValue(m_managed));
    }
    if (m_animated_isSet) {
        obj.insert(QString("animated"), ::dc_rest::toJsonValue(m_animated));
    }
    if (m_available_isSet) {
        obj.insert(QString("available"), ::dc_rest::toJsonValue(m_available));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::dc_rest::toJsonValue(m_user));
    }
    return obj;
}

QString OAIEmojiResponse::getId() const {
    return m_id;
}
void OAIEmojiResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIEmojiResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIEmojiResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIEmojiResponse::getName() const {
    return m_name;
}
void OAIEmojiResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIEmojiResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIEmojiResponse::is_name_Valid() const{
    return m_name_isValid;
}

QList<QString> OAIEmojiResponse::getRoles() const {
    return m_roles;
}
void OAIEmojiResponse::setRoles(const QList<QString> &roles) {
    m_roles = roles;
    m_roles_isSet = true;
}

bool OAIEmojiResponse::is_roles_Set() const{
    return m_roles_isSet;
}

bool OAIEmojiResponse::is_roles_Valid() const{
    return m_roles_isValid;
}

bool OAIEmojiResponse::isRequireColons() const {
    return m_require_colons;
}
void OAIEmojiResponse::setRequireColons(const bool &require_colons) {
    m_require_colons = require_colons;
    m_require_colons_isSet = true;
}

bool OAIEmojiResponse::is_require_colons_Set() const{
    return m_require_colons_isSet;
}

bool OAIEmojiResponse::is_require_colons_Valid() const{
    return m_require_colons_isValid;
}

bool OAIEmojiResponse::isManaged() const {
    return m_managed;
}
void OAIEmojiResponse::setManaged(const bool &managed) {
    m_managed = managed;
    m_managed_isSet = true;
}

bool OAIEmojiResponse::is_managed_Set() const{
    return m_managed_isSet;
}

bool OAIEmojiResponse::is_managed_Valid() const{
    return m_managed_isValid;
}

bool OAIEmojiResponse::isAnimated() const {
    return m_animated;
}
void OAIEmojiResponse::setAnimated(const bool &animated) {
    m_animated = animated;
    m_animated_isSet = true;
}

bool OAIEmojiResponse::is_animated_Set() const{
    return m_animated_isSet;
}

bool OAIEmojiResponse::is_animated_Valid() const{
    return m_animated_isValid;
}

bool OAIEmojiResponse::isAvailable() const {
    return m_available;
}
void OAIEmojiResponse::setAvailable(const bool &available) {
    m_available = available;
    m_available_isSet = true;
}

bool OAIEmojiResponse::is_available_Set() const{
    return m_available_isSet;
}

bool OAIEmojiResponse::is_available_Valid() const{
    return m_available_isValid;
}

OAIUserResponse OAIEmojiResponse::getUser() const {
    return m_user;
}
void OAIEmojiResponse::setUser(const OAIUserResponse &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIEmojiResponse::is_user_Set() const{
    return m_user_isSet;
}

bool OAIEmojiResponse::is_user_Valid() const{
    return m_user_isValid;
}

bool OAIEmojiResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_roles.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_require_colons_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_managed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_animated_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_available_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEmojiResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_roles_isValid && m_require_colons_isValid && m_managed_isValid && m_animated_isValid && m_available_isValid && true;
}

} // namespace dc_rest
