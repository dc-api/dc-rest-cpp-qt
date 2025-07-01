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

#include "OAIWidgetResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIWidgetResponse::OAIWidgetResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWidgetResponse::OAIWidgetResponse() {
    this->initializeModel();
}

OAIWidgetResponse::~OAIWidgetResponse() {}

void OAIWidgetResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_channels_isSet = false;
    m_channels_isValid = false;

    m_members_isSet = false;
    m_members_isValid = false;

    m_presence_count_isSet = false;
    m_presence_count_isValid = false;

    m_instant_invite_isSet = false;
    m_instant_invite_isValid = false;
}

void OAIWidgetResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWidgetResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_channels_isValid = ::dc_rest::fromJsonValue(m_channels, json[QString("channels")]);
    m_channels_isSet = !json[QString("channels")].isNull() && m_channels_isValid;

    m_members_isValid = ::dc_rest::fromJsonValue(m_members, json[QString("members")]);
    m_members_isSet = !json[QString("members")].isNull() && m_members_isValid;

    m_presence_count_isValid = ::dc_rest::fromJsonValue(m_presence_count, json[QString("presence_count")]);
    m_presence_count_isSet = !json[QString("presence_count")].isNull() && m_presence_count_isValid;

    m_instant_invite_isValid = ::dc_rest::fromJsonValue(m_instant_invite, json[QString("instant_invite")]);
    m_instant_invite_isSet = !json[QString("instant_invite")].isNull() && m_instant_invite_isValid;
}

QString OAIWidgetResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWidgetResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_channels.size() > 0) {
        obj.insert(QString("channels"), ::dc_rest::toJsonValue(m_channels));
    }
    if (m_members.size() > 0) {
        obj.insert(QString("members"), ::dc_rest::toJsonValue(m_members));
    }
    if (m_presence_count_isSet) {
        obj.insert(QString("presence_count"), ::dc_rest::toJsonValue(m_presence_count));
    }
    if (m_instant_invite_isSet) {
        obj.insert(QString("instant_invite"), ::dc_rest::toJsonValue(m_instant_invite));
    }
    return obj;
}

QString OAIWidgetResponse::getId() const {
    return m_id;
}
void OAIWidgetResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIWidgetResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIWidgetResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIWidgetResponse::getName() const {
    return m_name;
}
void OAIWidgetResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIWidgetResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIWidgetResponse::is_name_Valid() const{
    return m_name_isValid;
}

QList<OAIWidgetChannel> OAIWidgetResponse::getChannels() const {
    return m_channels;
}
void OAIWidgetResponse::setChannels(const QList<OAIWidgetChannel> &channels) {
    m_channels = channels;
    m_channels_isSet = true;
}

bool OAIWidgetResponse::is_channels_Set() const{
    return m_channels_isSet;
}

bool OAIWidgetResponse::is_channels_Valid() const{
    return m_channels_isValid;
}

QList<OAIWidgetMember> OAIWidgetResponse::getMembers() const {
    return m_members;
}
void OAIWidgetResponse::setMembers(const QList<OAIWidgetMember> &members) {
    m_members = members;
    m_members_isSet = true;
}

bool OAIWidgetResponse::is_members_Set() const{
    return m_members_isSet;
}

bool OAIWidgetResponse::is_members_Valid() const{
    return m_members_isValid;
}

qint32 OAIWidgetResponse::getPresenceCount() const {
    return m_presence_count;
}
void OAIWidgetResponse::setPresenceCount(const qint32 &presence_count) {
    m_presence_count = presence_count;
    m_presence_count_isSet = true;
}

bool OAIWidgetResponse::is_presence_count_Set() const{
    return m_presence_count_isSet;
}

bool OAIWidgetResponse::is_presence_count_Valid() const{
    return m_presence_count_isValid;
}

QString OAIWidgetResponse::getInstantInvite() const {
    return m_instant_invite;
}
void OAIWidgetResponse::setInstantInvite(const QString &instant_invite) {
    m_instant_invite = instant_invite;
    m_instant_invite_isSet = true;
}

bool OAIWidgetResponse::is_instant_invite_Set() const{
    return m_instant_invite_isSet;
}

bool OAIWidgetResponse::is_instant_invite_Valid() const{
    return m_instant_invite_isValid;
}

bool OAIWidgetResponse::isSet() const {
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

        if (m_channels.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_members.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_presence_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_instant_invite_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWidgetResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_channels_isValid && m_members_isValid && m_presence_count_isValid && true;
}

} // namespace dc_rest
