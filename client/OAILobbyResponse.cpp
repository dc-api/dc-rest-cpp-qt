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

#include "OAILobbyResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAILobbyResponse::OAILobbyResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAILobbyResponse::OAILobbyResponse() {
    this->initializeModel();
}

OAILobbyResponse::~OAILobbyResponse() {}

void OAILobbyResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_application_id_isSet = false;
    m_application_id_isValid = false;

    m_metadata_isSet = false;
    m_metadata_isValid = false;

    m_members_isSet = false;
    m_members_isValid = false;

    m_linked_channel_isSet = false;
    m_linked_channel_isValid = false;
}

void OAILobbyResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAILobbyResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_application_id_isValid = ::dc_rest::fromJsonValue(m_application_id, json[QString("application_id")]);
    m_application_id_isSet = !json[QString("application_id")].isNull() && m_application_id_isValid;

    m_metadata_isValid = ::dc_rest::fromJsonValue(m_metadata, json[QString("metadata")]);
    m_metadata_isSet = !json[QString("metadata")].isNull() && m_metadata_isValid;

    m_members_isValid = ::dc_rest::fromJsonValue(m_members, json[QString("members")]);
    m_members_isSet = !json[QString("members")].isNull() && m_members_isValid;

    m_linked_channel_isValid = ::dc_rest::fromJsonValue(m_linked_channel, json[QString("linked_channel")]);
    m_linked_channel_isSet = !json[QString("linked_channel")].isNull() && m_linked_channel_isValid;
}

QString OAILobbyResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAILobbyResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_application_id_isSet) {
        obj.insert(QString("application_id"), ::dc_rest::toJsonValue(m_application_id));
    }
    if (m_metadata.size() > 0) {
        obj.insert(QString("metadata"), ::dc_rest::toJsonValue(m_metadata));
    }
    if (m_members.size() > 0) {
        obj.insert(QString("members"), ::dc_rest::toJsonValue(m_members));
    }
    if (m_linked_channel.isSet()) {
        obj.insert(QString("linked_channel"), ::dc_rest::toJsonValue(m_linked_channel));
    }
    return obj;
}

QString OAILobbyResponse::getId() const {
    return m_id;
}
void OAILobbyResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAILobbyResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAILobbyResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAILobbyResponse::getApplicationId() const {
    return m_application_id;
}
void OAILobbyResponse::setApplicationId(const QString &application_id) {
    m_application_id = application_id;
    m_application_id_isSet = true;
}

bool OAILobbyResponse::is_application_id_Set() const{
    return m_application_id_isSet;
}

bool OAILobbyResponse::is_application_id_Valid() const{
    return m_application_id_isValid;
}

QMap<QString, QString> OAILobbyResponse::getMetadata() const {
    return m_metadata;
}
void OAILobbyResponse::setMetadata(const QMap<QString, QString> &metadata) {
    m_metadata = metadata;
    m_metadata_isSet = true;
}

bool OAILobbyResponse::is_metadata_Set() const{
    return m_metadata_isSet;
}

bool OAILobbyResponse::is_metadata_Valid() const{
    return m_metadata_isValid;
}

QList<OAILobbyMemberResponse> OAILobbyResponse::getMembers() const {
    return m_members;
}
void OAILobbyResponse::setMembers(const QList<OAILobbyMemberResponse> &members) {
    m_members = members;
    m_members_isSet = true;
}

bool OAILobbyResponse::is_members_Set() const{
    return m_members_isSet;
}

bool OAILobbyResponse::is_members_Valid() const{
    return m_members_isValid;
}

OAIGuildChannelResponse OAILobbyResponse::getLinkedChannel() const {
    return m_linked_channel;
}
void OAILobbyResponse::setLinkedChannel(const OAIGuildChannelResponse &linked_channel) {
    m_linked_channel = linked_channel;
    m_linked_channel_isSet = true;
}

bool OAILobbyResponse::is_linked_channel_Set() const{
    return m_linked_channel_isSet;
}

bool OAILobbyResponse::is_linked_channel_Valid() const{
    return m_linked_channel_isValid;
}

bool OAILobbyResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_application_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_metadata.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_members.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_linked_channel.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAILobbyResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_application_id_isValid && true;
}

} // namespace dc_rest
