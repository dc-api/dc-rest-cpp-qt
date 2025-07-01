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

#include "OAIConnectedAccountResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIConnectedAccountResponse::OAIConnectedAccountResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIConnectedAccountResponse::OAIConnectedAccountResponse() {
    this->initializeModel();
}

OAIConnectedAccountResponse::~OAIConnectedAccountResponse() {}

void OAIConnectedAccountResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_friend_sync_isSet = false;
    m_friend_sync_isValid = false;

    m_show_activity_isSet = false;
    m_show_activity_isValid = false;

    m_two_way_link_isSet = false;
    m_two_way_link_isValid = false;

    m_verified_isSet = false;
    m_verified_isValid = false;

    m_visibility_isSet = false;
    m_visibility_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_integrations_isSet = false;
    m_integrations_isValid = false;

    m_revoked_isSet = false;
    m_revoked_isValid = false;
}

void OAIConnectedAccountResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIConnectedAccountResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_friend_sync_isValid = ::dc_rest::fromJsonValue(m_friend_sync, json[QString("friend_sync")]);
    m_friend_sync_isSet = !json[QString("friend_sync")].isNull() && m_friend_sync_isValid;

    m_show_activity_isValid = ::dc_rest::fromJsonValue(m_show_activity, json[QString("show_activity")]);
    m_show_activity_isSet = !json[QString("show_activity")].isNull() && m_show_activity_isValid;

    m_two_way_link_isValid = ::dc_rest::fromJsonValue(m_two_way_link, json[QString("two_way_link")]);
    m_two_way_link_isSet = !json[QString("two_way_link")].isNull() && m_two_way_link_isValid;

    m_verified_isValid = ::dc_rest::fromJsonValue(m_verified, json[QString("verified")]);
    m_verified_isSet = !json[QString("verified")].isNull() && m_verified_isValid;

    m_visibility_isValid = ::dc_rest::fromJsonValue(m_visibility, json[QString("visibility")]);
    m_visibility_isSet = !json[QString("visibility")].isNull() && m_visibility_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_integrations_isValid = ::dc_rest::fromJsonValue(m_integrations, json[QString("integrations")]);
    m_integrations_isSet = !json[QString("integrations")].isNull() && m_integrations_isValid;

    m_revoked_isValid = ::dc_rest::fromJsonValue(m_revoked, json[QString("revoked")]);
    m_revoked_isSet = !json[QString("revoked")].isNull() && m_revoked_isValid;
}

QString OAIConnectedAccountResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIConnectedAccountResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_friend_sync_isSet) {
        obj.insert(QString("friend_sync"), ::dc_rest::toJsonValue(m_friend_sync));
    }
    if (m_show_activity_isSet) {
        obj.insert(QString("show_activity"), ::dc_rest::toJsonValue(m_show_activity));
    }
    if (m_two_way_link_isSet) {
        obj.insert(QString("two_way_link"), ::dc_rest::toJsonValue(m_two_way_link));
    }
    if (m_verified_isSet) {
        obj.insert(QString("verified"), ::dc_rest::toJsonValue(m_verified));
    }
    if (m_visibility_isSet) {
        obj.insert(QString("visibility"), ::dc_rest::toJsonValue(m_visibility));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_integrations.size() > 0) {
        obj.insert(QString("integrations"), ::dc_rest::toJsonValue(m_integrations));
    }
    if (m_revoked_isSet) {
        obj.insert(QString("revoked"), ::dc_rest::toJsonValue(m_revoked));
    }
    return obj;
}

QString OAIConnectedAccountResponse::getId() const {
    return m_id;
}
void OAIConnectedAccountResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIConnectedAccountResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIConnectedAccountResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIConnectedAccountResponse::getType() const {
    return m_type;
}
void OAIConnectedAccountResponse::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIConnectedAccountResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIConnectedAccountResponse::is_type_Valid() const{
    return m_type_isValid;
}

bool OAIConnectedAccountResponse::isFriendSync() const {
    return m_friend_sync;
}
void OAIConnectedAccountResponse::setFriendSync(const bool &friend_sync) {
    m_friend_sync = friend_sync;
    m_friend_sync_isSet = true;
}

bool OAIConnectedAccountResponse::is_friend_sync_Set() const{
    return m_friend_sync_isSet;
}

bool OAIConnectedAccountResponse::is_friend_sync_Valid() const{
    return m_friend_sync_isValid;
}

bool OAIConnectedAccountResponse::isShowActivity() const {
    return m_show_activity;
}
void OAIConnectedAccountResponse::setShowActivity(const bool &show_activity) {
    m_show_activity = show_activity;
    m_show_activity_isSet = true;
}

bool OAIConnectedAccountResponse::is_show_activity_Set() const{
    return m_show_activity_isSet;
}

bool OAIConnectedAccountResponse::is_show_activity_Valid() const{
    return m_show_activity_isValid;
}

bool OAIConnectedAccountResponse::isTwoWayLink() const {
    return m_two_way_link;
}
void OAIConnectedAccountResponse::setTwoWayLink(const bool &two_way_link) {
    m_two_way_link = two_way_link;
    m_two_way_link_isSet = true;
}

bool OAIConnectedAccountResponse::is_two_way_link_Set() const{
    return m_two_way_link_isSet;
}

bool OAIConnectedAccountResponse::is_two_way_link_Valid() const{
    return m_two_way_link_isValid;
}

bool OAIConnectedAccountResponse::isVerified() const {
    return m_verified;
}
void OAIConnectedAccountResponse::setVerified(const bool &verified) {
    m_verified = verified;
    m_verified_isSet = true;
}

bool OAIConnectedAccountResponse::is_verified_Set() const{
    return m_verified_isSet;
}

bool OAIConnectedAccountResponse::is_verified_Valid() const{
    return m_verified_isValid;
}

qint32 OAIConnectedAccountResponse::getVisibility() const {
    return m_visibility;
}
void OAIConnectedAccountResponse::setVisibility(const qint32 &visibility) {
    m_visibility = visibility;
    m_visibility_isSet = true;
}

bool OAIConnectedAccountResponse::is_visibility_Set() const{
    return m_visibility_isSet;
}

bool OAIConnectedAccountResponse::is_visibility_Valid() const{
    return m_visibility_isValid;
}

QString OAIConnectedAccountResponse::getName() const {
    return m_name;
}
void OAIConnectedAccountResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIConnectedAccountResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIConnectedAccountResponse::is_name_Valid() const{
    return m_name_isValid;
}

QList<OAIConnectedAccountIntegrationResponse> OAIConnectedAccountResponse::getIntegrations() const {
    return m_integrations;
}
void OAIConnectedAccountResponse::setIntegrations(const QList<OAIConnectedAccountIntegrationResponse> &integrations) {
    m_integrations = integrations;
    m_integrations_isSet = true;
}

bool OAIConnectedAccountResponse::is_integrations_Set() const{
    return m_integrations_isSet;
}

bool OAIConnectedAccountResponse::is_integrations_Valid() const{
    return m_integrations_isValid;
}

bool OAIConnectedAccountResponse::isRevoked() const {
    return m_revoked;
}
void OAIConnectedAccountResponse::setRevoked(const bool &revoked) {
    m_revoked = revoked;
    m_revoked_isSet = true;
}

bool OAIConnectedAccountResponse::is_revoked_Set() const{
    return m_revoked_isSet;
}

bool OAIConnectedAccountResponse::is_revoked_Valid() const{
    return m_revoked_isValid;
}

bool OAIConnectedAccountResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_friend_sync_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_show_activity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_two_way_link_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_verified_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_visibility_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_integrations.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_revoked_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIConnectedAccountResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_type_isValid && m_friend_sync_isValid && m_show_activity_isValid && m_two_way_link_isValid && m_verified_isValid && m_visibility_isValid && true;
}

} // namespace dc_rest
