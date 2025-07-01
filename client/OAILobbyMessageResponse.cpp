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

#include "OAILobbyMessageResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAILobbyMessageResponse::OAILobbyMessageResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAILobbyMessageResponse::OAILobbyMessageResponse() {
    this->initializeModel();
}

OAILobbyMessageResponse::~OAILobbyMessageResponse() {}

void OAILobbyMessageResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_content_isSet = false;
    m_content_isValid = false;

    m_lobby_id_isSet = false;
    m_lobby_id_isValid = false;

    m_channel_id_isSet = false;
    m_channel_id_isValid = false;

    m_author_isSet = false;
    m_author_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_metadata_isSet = false;
    m_metadata_isValid = false;

    m_application_id_isSet = false;
    m_application_id_isValid = false;
}

void OAILobbyMessageResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAILobbyMessageResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_content_isValid = ::dc_rest::fromJsonValue(m_content, json[QString("content")]);
    m_content_isSet = !json[QString("content")].isNull() && m_content_isValid;

    m_lobby_id_isValid = ::dc_rest::fromJsonValue(m_lobby_id, json[QString("lobby_id")]);
    m_lobby_id_isSet = !json[QString("lobby_id")].isNull() && m_lobby_id_isValid;

    m_channel_id_isValid = ::dc_rest::fromJsonValue(m_channel_id, json[QString("channel_id")]);
    m_channel_id_isSet = !json[QString("channel_id")].isNull() && m_channel_id_isValid;

    m_author_isValid = ::dc_rest::fromJsonValue(m_author, json[QString("author")]);
    m_author_isSet = !json[QString("author")].isNull() && m_author_isValid;

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_metadata_isValid = ::dc_rest::fromJsonValue(m_metadata, json[QString("metadata")]);
    m_metadata_isSet = !json[QString("metadata")].isNull() && m_metadata_isValid;

    m_application_id_isValid = ::dc_rest::fromJsonValue(m_application_id, json[QString("application_id")]);
    m_application_id_isSet = !json[QString("application_id")].isNull() && m_application_id_isValid;
}

QString OAILobbyMessageResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAILobbyMessageResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_content_isSet) {
        obj.insert(QString("content"), ::dc_rest::toJsonValue(m_content));
    }
    if (m_lobby_id_isSet) {
        obj.insert(QString("lobby_id"), ::dc_rest::toJsonValue(m_lobby_id));
    }
    if (m_channel_id_isSet) {
        obj.insert(QString("channel_id"), ::dc_rest::toJsonValue(m_channel_id));
    }
    if (m_author.isSet()) {
        obj.insert(QString("author"), ::dc_rest::toJsonValue(m_author));
    }
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::dc_rest::toJsonValue(m_flags));
    }
    if (m_metadata.size() > 0) {
        obj.insert(QString("metadata"), ::dc_rest::toJsonValue(m_metadata));
    }
    if (m_application_id_isSet) {
        obj.insert(QString("application_id"), ::dc_rest::toJsonValue(m_application_id));
    }
    return obj;
}

QString OAILobbyMessageResponse::getId() const {
    return m_id;
}
void OAILobbyMessageResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAILobbyMessageResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAILobbyMessageResponse::is_id_Valid() const{
    return m_id_isValid;
}

qint32 OAILobbyMessageResponse::getType() const {
    return m_type;
}
void OAILobbyMessageResponse::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAILobbyMessageResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAILobbyMessageResponse::is_type_Valid() const{
    return m_type_isValid;
}

QString OAILobbyMessageResponse::getContent() const {
    return m_content;
}
void OAILobbyMessageResponse::setContent(const QString &content) {
    m_content = content;
    m_content_isSet = true;
}

bool OAILobbyMessageResponse::is_content_Set() const{
    return m_content_isSet;
}

bool OAILobbyMessageResponse::is_content_Valid() const{
    return m_content_isValid;
}

QString OAILobbyMessageResponse::getLobbyId() const {
    return m_lobby_id;
}
void OAILobbyMessageResponse::setLobbyId(const QString &lobby_id) {
    m_lobby_id = lobby_id;
    m_lobby_id_isSet = true;
}

bool OAILobbyMessageResponse::is_lobby_id_Set() const{
    return m_lobby_id_isSet;
}

bool OAILobbyMessageResponse::is_lobby_id_Valid() const{
    return m_lobby_id_isValid;
}

QString OAILobbyMessageResponse::getChannelId() const {
    return m_channel_id;
}
void OAILobbyMessageResponse::setChannelId(const QString &channel_id) {
    m_channel_id = channel_id;
    m_channel_id_isSet = true;
}

bool OAILobbyMessageResponse::is_channel_id_Set() const{
    return m_channel_id_isSet;
}

bool OAILobbyMessageResponse::is_channel_id_Valid() const{
    return m_channel_id_isValid;
}

OAIUserResponse OAILobbyMessageResponse::getAuthor() const {
    return m_author;
}
void OAILobbyMessageResponse::setAuthor(const OAIUserResponse &author) {
    m_author = author;
    m_author_isSet = true;
}

bool OAILobbyMessageResponse::is_author_Set() const{
    return m_author_isSet;
}

bool OAILobbyMessageResponse::is_author_Valid() const{
    return m_author_isValid;
}

qint32 OAILobbyMessageResponse::getFlags() const {
    return m_flags;
}
void OAILobbyMessageResponse::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAILobbyMessageResponse::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAILobbyMessageResponse::is_flags_Valid() const{
    return m_flags_isValid;
}

QMap<QString, QString> OAILobbyMessageResponse::getMetadata() const {
    return m_metadata;
}
void OAILobbyMessageResponse::setMetadata(const QMap<QString, QString> &metadata) {
    m_metadata = metadata;
    m_metadata_isSet = true;
}

bool OAILobbyMessageResponse::is_metadata_Set() const{
    return m_metadata_isSet;
}

bool OAILobbyMessageResponse::is_metadata_Valid() const{
    return m_metadata_isValid;
}

QString OAILobbyMessageResponse::getApplicationId() const {
    return m_application_id;
}
void OAILobbyMessageResponse::setApplicationId(const QString &application_id) {
    m_application_id = application_id;
    m_application_id_isSet = true;
}

bool OAILobbyMessageResponse::is_application_id_Set() const{
    return m_application_id_isSet;
}

bool OAILobbyMessageResponse::is_application_id_Valid() const{
    return m_application_id_isValid;
}

bool OAILobbyMessageResponse::isSet() const {
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

        if (m_content_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_lobby_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_author.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_metadata.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_application_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAILobbyMessageResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_type_isValid && m_content_isValid && m_lobby_id_isValid && m_channel_id_isValid && m_author_isValid && m_flags_isValid && true;
}

} // namespace dc_rest
