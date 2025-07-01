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

#include "OAIMyGuildResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIMyGuildResponse::OAIMyGuildResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMyGuildResponse::OAIMyGuildResponse() {
    this->initializeModel();
}

OAIMyGuildResponse::~OAIMyGuildResponse() {}

void OAIMyGuildResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_owner_isSet = false;
    m_owner_isValid = false;

    m_permissions_isSet = false;
    m_permissions_isValid = false;

    m_features_isSet = false;
    m_features_isValid = false;

    m_icon_isSet = false;
    m_icon_isValid = false;

    m_banner_isSet = false;
    m_banner_isValid = false;

    m_approximate_member_count_isSet = false;
    m_approximate_member_count_isValid = false;

    m_approximate_presence_count_isSet = false;
    m_approximate_presence_count_isValid = false;
}

void OAIMyGuildResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMyGuildResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_owner_isValid = ::dc_rest::fromJsonValue(m_owner, json[QString("owner")]);
    m_owner_isSet = !json[QString("owner")].isNull() && m_owner_isValid;

    m_permissions_isValid = ::dc_rest::fromJsonValue(m_permissions, json[QString("permissions")]);
    m_permissions_isSet = !json[QString("permissions")].isNull() && m_permissions_isValid;

    m_features_isValid = ::dc_rest::fromJsonValue(m_features, json[QString("features")]);
    m_features_isSet = !json[QString("features")].isNull() && m_features_isValid;

    m_icon_isValid = ::dc_rest::fromJsonValue(m_icon, json[QString("icon")]);
    m_icon_isSet = !json[QString("icon")].isNull() && m_icon_isValid;

    m_banner_isValid = ::dc_rest::fromJsonValue(m_banner, json[QString("banner")]);
    m_banner_isSet = !json[QString("banner")].isNull() && m_banner_isValid;

    m_approximate_member_count_isValid = ::dc_rest::fromJsonValue(m_approximate_member_count, json[QString("approximate_member_count")]);
    m_approximate_member_count_isSet = !json[QString("approximate_member_count")].isNull() && m_approximate_member_count_isValid;

    m_approximate_presence_count_isValid = ::dc_rest::fromJsonValue(m_approximate_presence_count, json[QString("approximate_presence_count")]);
    m_approximate_presence_count_isSet = !json[QString("approximate_presence_count")].isNull() && m_approximate_presence_count_isValid;
}

QString OAIMyGuildResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMyGuildResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_owner_isSet) {
        obj.insert(QString("owner"), ::dc_rest::toJsonValue(m_owner));
    }
    if (m_permissions_isSet) {
        obj.insert(QString("permissions"), ::dc_rest::toJsonValue(m_permissions));
    }
    if (m_features.size() > 0) {
        obj.insert(QString("features"), ::dc_rest::toJsonValue(m_features));
    }
    if (m_icon_isSet) {
        obj.insert(QString("icon"), ::dc_rest::toJsonValue(m_icon));
    }
    if (m_banner_isSet) {
        obj.insert(QString("banner"), ::dc_rest::toJsonValue(m_banner));
    }
    if (m_approximate_member_count_isSet) {
        obj.insert(QString("approximate_member_count"), ::dc_rest::toJsonValue(m_approximate_member_count));
    }
    if (m_approximate_presence_count_isSet) {
        obj.insert(QString("approximate_presence_count"), ::dc_rest::toJsonValue(m_approximate_presence_count));
    }
    return obj;
}

QString OAIMyGuildResponse::getId() const {
    return m_id;
}
void OAIMyGuildResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIMyGuildResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIMyGuildResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIMyGuildResponse::getName() const {
    return m_name;
}
void OAIMyGuildResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIMyGuildResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIMyGuildResponse::is_name_Valid() const{
    return m_name_isValid;
}

bool OAIMyGuildResponse::isOwner() const {
    return m_owner;
}
void OAIMyGuildResponse::setOwner(const bool &owner) {
    m_owner = owner;
    m_owner_isSet = true;
}

bool OAIMyGuildResponse::is_owner_Set() const{
    return m_owner_isSet;
}

bool OAIMyGuildResponse::is_owner_Valid() const{
    return m_owner_isValid;
}

QString OAIMyGuildResponse::getPermissions() const {
    return m_permissions;
}
void OAIMyGuildResponse::setPermissions(const QString &permissions) {
    m_permissions = permissions;
    m_permissions_isSet = true;
}

bool OAIMyGuildResponse::is_permissions_Set() const{
    return m_permissions_isSet;
}

bool OAIMyGuildResponse::is_permissions_Valid() const{
    return m_permissions_isValid;
}

QSet<QString> OAIMyGuildResponse::getFeatures() const {
    return m_features;
}
void OAIMyGuildResponse::setFeatures(const QSet<QString> &features) {
    m_features = features;
    m_features_isSet = true;
}

bool OAIMyGuildResponse::is_features_Set() const{
    return m_features_isSet;
}

bool OAIMyGuildResponse::is_features_Valid() const{
    return m_features_isValid;
}

QString OAIMyGuildResponse::getIcon() const {
    return m_icon;
}
void OAIMyGuildResponse::setIcon(const QString &icon) {
    m_icon = icon;
    m_icon_isSet = true;
}

bool OAIMyGuildResponse::is_icon_Set() const{
    return m_icon_isSet;
}

bool OAIMyGuildResponse::is_icon_Valid() const{
    return m_icon_isValid;
}

QString OAIMyGuildResponse::getBanner() const {
    return m_banner;
}
void OAIMyGuildResponse::setBanner(const QString &banner) {
    m_banner = banner;
    m_banner_isSet = true;
}

bool OAIMyGuildResponse::is_banner_Set() const{
    return m_banner_isSet;
}

bool OAIMyGuildResponse::is_banner_Valid() const{
    return m_banner_isValid;
}

qint32 OAIMyGuildResponse::getApproximateMemberCount() const {
    return m_approximate_member_count;
}
void OAIMyGuildResponse::setApproximateMemberCount(const qint32 &approximate_member_count) {
    m_approximate_member_count = approximate_member_count;
    m_approximate_member_count_isSet = true;
}

bool OAIMyGuildResponse::is_approximate_member_count_Set() const{
    return m_approximate_member_count_isSet;
}

bool OAIMyGuildResponse::is_approximate_member_count_Valid() const{
    return m_approximate_member_count_isValid;
}

qint32 OAIMyGuildResponse::getApproximatePresenceCount() const {
    return m_approximate_presence_count;
}
void OAIMyGuildResponse::setApproximatePresenceCount(const qint32 &approximate_presence_count) {
    m_approximate_presence_count = approximate_presence_count;
    m_approximate_presence_count_isSet = true;
}

bool OAIMyGuildResponse::is_approximate_presence_count_Set() const{
    return m_approximate_presence_count_isSet;
}

bool OAIMyGuildResponse::is_approximate_presence_count_Valid() const{
    return m_approximate_presence_count_isValid;
}

bool OAIMyGuildResponse::isSet() const {
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

        if (m_owner_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_permissions_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_features.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_icon_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_banner_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_approximate_member_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_approximate_presence_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMyGuildResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_owner_isValid && m_permissions_isValid && m_features_isValid && true;
}

} // namespace dc_rest
